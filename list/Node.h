//
// Created by Lucas Garcia on 02/12/2022.
//

#include <iostream>

#ifndef CPP_SANDBOX_NODE_H
#define CPP_SANDBOX_NODE_H

#endif //CPP_SANDBOX_NODE_H

// create a double linked node where the next and previous nodes are also nodes
// Generic type T should be comparable
template <typename T>
class Node {
public:
    T *data;
    Node<T> *next;
    Node<T> *prev;

    Node(T data) {
        this->data = new T(data);
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(T *data, Node<T> *next, Node<T> *prev) {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }

    ~Node() {
        delete data;
        delete next;
        delete prev;
    }

    bool operator==(const Node<T> *node) {
        return data == node->data;
    }

    bool operator!=(const Node<T> *node) {
        return data != node->data;
    }

    bool operator<(const Node<T> *node) {
        return data < node->data;
    }

    bool operator>(const Node<T> *node) {
        return data > node->data;
    }

    bool operator<=(const Node<T> *node) {
        return data <= node->data;
    }

    bool operator>=(const Node<T> &node) {
        return data >= node.data;
    }

    //getters
    T getData() {
        return *data;
    }

    //setters

    void setData(T *data) {
        this->data = new T(*data);
    }

    //setNext
    void setNext(Node<T> *next) {
        this->next = next;
    }

    //setPrev
    void setPrev(Node<T> *prev) {
        this->prev = prev;
    }

    void print() {
        data->print();
    }
};