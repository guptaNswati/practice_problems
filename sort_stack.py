#!/usr/bin/python3
"""
Implemenattion of Stack data structure using linkedlist supporting push andd pop
"""
class Node:
    def __init__(self, data, next_node):
        self.data = data
        self.next_node = next_node


class singleList:
    def __init__(self):
        self.head = None

    def push(self, data):
        newN = Node(data, None)
        newN.next_node = self.head
        self.head = newN

    def pop(self):
        if self.head is not None:
            if self.head.next_node is None:
                del self.head
                return
            else:
                tmp = self.head
                self.head = self.head.next_node
                del tmp

    def print_list(self):
        if self.head is not None:
            tmp = self.head
            while tmp:
                print(tmp.data)
                tmp = tmp.next_node

    def __str__(self):
        strng = ""
        if self.head is not None:
            tmp = self.head
            while tmp:
                strng += str(tmp.data) + "\n"
                tmp = tmp.next_node
        return strng

    @staticmethod
    def sort_stack(s1, s2):
        s2.push(s1.head.data)
        s1.pop()
        while s1 is not None:
            if s1.head.data < s2.head.data:
                tmp = s1.head.data
                s1.pop
                while (tmp < s2.head.data and s2 is not None):
                    s1.push(s2.head.data)
                    s2.pop()
                s2.push(tmp)
            elif s1.head.data >= s2.head.data:
                s2.push(s1.head.data)
                s1.pop
        while s2 is not None:
            s1.push(s2.head.data)
            s2.pop()



if __name__ == "__main__":
    lst = singleList()
    lst2 = singleList()
    lst.push(10)
    lst.push(-1)
    lst.push(0)
    lst.push(12)
    lst.push(-1)
    lst.push(7)
    print(lst)
    lst.sort_stack(lst, lst2)
