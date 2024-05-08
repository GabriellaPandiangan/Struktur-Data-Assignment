#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int age;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    void insertData(string name, int age) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->age = age;
        newNode->next = head;
        head = newNode;
    }

    void insertAfter(string prevName, string name, int age) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->age = age;

        Node* current = head;
        while (current!= nullptr) {
            if (current->name == prevName) {
                newNode->next = current->next;
                current->next = newNode;
                return;
            }
            current = current->next;
        }

        cout << "Previous node not found." << endl;
    }

    void deleteNode(string name) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->name == name) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current!= nullptr) {
            if (current->name == name) {
                previous->next = current->next;
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }

        cout << "Node not found." << endl;
    }

    void updateNode(string name, string newName, int newAge) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->name == name) {
            head->name = newName;
            head->age = newAge;
            return;
        }

        Node* current = head;

        while (current!= nullptr) {
            if (current->name == name) {
                current->name = newName;
                current->age = newAge;
                return;
            }
            current = current->next;
        }

        cout << "Node not found." << endl;
    }

    void displayList() {
        Node* current = head;

        while (current!= nullptr) {
            cout << current->name << " " << current->age << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;

    // Insert data
    list.insertData("Gabriella", 19);
    list.insertData("John", 19);
    list.insertData("Jane", 20);
    list.insertData("Michael", 18);
    list.insertData("Yusuke", 19);
    list.insertData("Akechi", 20);

    // Display data
    list.displayList();

    // Delete Akechi
    list.deleteNode("Akechi");
    cout << "Deleted Akechi" << endl;

    // Insert Futaba between John and Jane
    list.insertAfter("John", "Futaba", 18);
    cout << "Inserted Futaba between John and Jane" << endl;

    // Display data
    list.displayList();

    // Update Michael to Reyn
    list.updateNode("Michael", "Reyn", 18);
    cout << "Updated Michael to Reyn" << endl;

    // Display data
    list.displayList();

    // Insert Hoshino and Karin
    list.insertData("Hoshino", 18);
    list.insertData("Karin", 18);

    // Display data
    list.displayList();

    return 0;
}