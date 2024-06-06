#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string val) : data(val), left(nullptr), right(nullptr) {}
};

void preOrder(TreeNode* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(TreeNode* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(TreeNode* node) {
    if (node == nullptr) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

TreeNode* insertNode(const vector<string>& nodes, int& index) {
    if (index >= nodes.size() || nodes[index] == "#") {
        ++index;
        return nullptr;
    }
    TreeNode* node = new TreeNode(nodes[index]);
    ++index;
    node->left = insertNode(nodes, index);
    node->right = insertNode(nodes, index);
    return node;
}

int main() {
    string NIM;
    cout << "Silakan masukkan NIM: ";
    cin >> NIM;

    int choice;
    TreeNode* root = nullptr;
    vector<string> treeNodes;
    vector<vector<int>> bobot;
    int jumlahSimpul = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Masukkan data tree\n";
        cout << "2. Masukkan bobot antar simpul\n";
        cout << "3. Tampilkan tree (pre-order)\n";
        cout << "4. Tampilkan tree (in-order)\n";
        cout << "5. Tampilkan tree (post-order)\n";
        cout << "6. Keluar\n";
        cout << "Silakan pilih: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Silakan masukkan jumlah simpul: ";
                cin >> jumlahSimpul;
                treeNodes.resize(jumlahSimpul);
                cout << "Silakan masukkan nama simpul (gunakan '#' untuk simpul kosong): " << endl;
                for (int i = 0; i < jumlahSimpul; ++i) {
                    cout << "Simpul " << i + 1 << ": ";
                    cin >> treeNodes[i];
                }
                int index = 0;
                root = insertNode(treeNodes, index);
                break;
            }
            case 2: {
                if (jumlahSimpul == 0) {
                    cout << "Silakan masukkan data tree terlebih dahulu." << endl;
                    break;
                }
                bobot.resize(jumlahSimpul, vector<int>(jumlahSimpul));
                cout << "Silakan masukkan bobot antar simpul:" << endl;
                for (int i = 0; i < jumlahSimpul; ++i) {
                    for (int j = 0; j < jumlahSimpul; ++j) {
                        cout << treeNodes[i] << " --> " << treeNodes[j] << " = ";
                        cin >> bobot[i][j];
                    }
                }
                break;
            }
            case 3: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam pre-order: ";
                preOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 4: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam in-order: ";
                inOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 5: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam post-order: ";
                postOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 6:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != 6);

    cout << "Process returned 0 (0x0) execution time: 11.763. press any key to continue..." << endl;

    return 0;
}
