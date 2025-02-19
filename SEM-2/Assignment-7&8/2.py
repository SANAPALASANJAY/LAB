class queue:
    def __init__(self):
        self.arr = []

    def enqueue(self, data):
        self.arr.append(data)
    
    def dequeue(self):
        if (self.is_empty()):
            print("Queue is empty!!!")
            return None
        val = self.arr.pop(0)
        return val
    
    def is_empty(self):
        return len(self.arr) == 0
    
    def size(self):
        return len(self.arr)
    
    def display(self):
        print(self.arr)


cue = queue()
cue.enqueue(0)
cue.enqueue(4)
cue.enqueue(3)
cue.display()
print(cue.size())
