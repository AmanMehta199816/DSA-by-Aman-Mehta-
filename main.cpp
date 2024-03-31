#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;

    // Constructor
    Node(string value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Function to append a task to the list
    void append(string value) {
        Node* new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    // Function to display the to-do list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }
    }

    // Function to delete a task from the list
    void remove(string value) {
        if (head == nullptr) {
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }
    }
};

int main() {
    // Create a to-do list
    LinkedList todoList;

    // Add tasks to the list
    todoList.append("Task 1");
    todoList.append("Task 2");
    todoList.append("Task 3");

    // Display the to-do list
    cout << "To-Do List:" << endl;
    todoList.display();

    // Delete a task from the list
    string taskToDelete = "Task 2";
    cout << "\nDeleting task: " << taskToDelete << endl;
    todoList.remove(taskToDelete);

    // Display the updated to-do list
    cout << "\nUpdated To-Do List:" << endl;
    todoList.display();

    return 0;
}

