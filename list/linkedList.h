//
// Created by Lucas Garcia on 02/12/2022.
//

#include "Node.h"

#ifndef CPP_SANDBOX_LINKEDLIST_H
#define CPP_SANDBOX_LINKEDLIST_H

#endif //CPP_SANDBOX_LINKEDLIST_H

// create a double linked list where the next and previous nodes are also nodes
// generic type T should be comparable
// implement all basic list functions such as add, remove, get, etc.
// list should be able to sort itself with quicksort
// list should implement print function

template <typename T>
class LinkedList {
private:
    Node<T> *head;
    Node<T> *tail;
    int size;
public:
    LinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    ~LinkedList() {
        delete head;
        delete tail;
    }

    void add(T data) {
        Node<T> *node = new Node<T>(data);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;
    }

    void remove(T data) {
        Node<T> *current = head;
        for (int i = 0; i < size; i++) {
            if (current->data == data) {
                remove(i);
                break;
            }
            current = current->next;
        }
    }

    T get(int index) {
        Node<T> *current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    void quickSort() {
        quickSort(head, tail);
    }

    void quickSort(Node<T> *start, Node<T> *end) {
        if (start == end) {
            return;
        }
        Node<T> *pivot = partition(start, end);
        quickSort(start, pivot->prev);
        quickSort(pivot->next, end);
    }

    Node<T>* partition(Node<T> *start, Node<T> *end) {
        Node<T> *pivot = end;
        Node<T> *current = start;
        Node<T> *prev = start;

        while (current != pivot) {
            if (*current->data < *pivot->data) {
                swap(prev, current);
                prev = prev->next;
            }
            current = current->next;
        }
        if (prev == pivot) return new Node(pivot->data, end, start);
        if (pivot == current && prev == start) {
            swap(pivot, prev);
            return new Node(pivot->data, prev->next, start);
        }
        swap(pivot, prev);
        return prev;
    }

    void swap(Node<T> *a, Node<T> *b) {
        T *temp = a->data;
        a->setData(b->data);
        b->setData(temp);
    }

    void print() {
        Node<T> *current = head;
        for (int i = 0; i < size; i++) {
            current->print();
            current = current->next;
        }
    }
};
