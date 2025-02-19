class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = self.tail = None

    def push_back(self,data):
        newNode = Node(data)
        if self.head == None:
            self.head = self.tail = newNode
            return
        self.tail.next = newNode
        self.tail = newNode
    
    def push_front(self, data):
        newNode = Node(data)
        if self.head == None:
            self.head = self.tail = newNode
            return
        newNode.next = self.head
        self.head = newNode

    def pop_back(self):
        if self.head == None:
            print("Empty Linked List!!")
            return
        temp = self.head
        if (temp.next == None):
            temp = None
            return
        while temp.next != self.tail:
            temp = temp.next
        temp.next = None
    
    def pop_front(self):
        if self.head == None:
            print("Empty Linked List!!")
            return
        if (self.head.next == None):
            self.head = None
        temp = self.head
        self.head = self.head.next
        temp = None
    
    def delete(self, key):
        temp = self.head
        if temp and temp.data == key:
            self.head = temp.next
            temp = None
            return
        
        prev = None
        while temp and temp.data != key:
            prev = temp
            temp = temp.next
        
        if temp == None:
            print("key Not Found!!")
            return
        
        prev.next = temp.next
        temp = None
    
    def display(self):
        temp = self.head
        while temp:
            print(f"{temp.data}->", end="")
            temp = temp.next
        print("None")


llist = linkedlist()
llist.push_back(4)
llist.push_back(3)
llist.push_front(0)


llist.delete(5)
llist.display()
