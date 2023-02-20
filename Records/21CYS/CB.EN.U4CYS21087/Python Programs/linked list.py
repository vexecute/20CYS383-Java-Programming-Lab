class node:
    def __init__(self, data):
        self.data = data
        self.ref = None


class linkedlist:
    def __init__(self):
        self.head = None

    def printll(self):
        if self.head == None:
            print("linkedlist is empty.")
        else:
            n = self.head
            while (n != None):
                print(n.data, end=" ")
                n = n.ref

    def add_front(self, data):
        new_node = node(data)
        new_node.ref = self.head
        self.head = new_node

    def add_end(self, data):
        new_node = node(data)
        n = self.head
        if (self.head == None):
            self.head = new_node
        else:
            while (n.ref != None):
                n = n.ref
            n.ref = new_node

    def insert_after(self, data, x):
        new_node = node(data)
        n = self.head
        while (n.ref != None):
            if (n.data == x):
                break
            n = n.ref
        if (n == None):
            print("No node found")
        else:
            new_node.ref = n.ref
            n.ref = new_node

    def insert_before(self, data, x):
        new_node = node(data)
        n = self.head

        if (n.data == x):
            new_node.ref = self.head
            self.head = new_node
        else:
            while (n.ref != None):
                m = n.ref
                if (m.data == x):
                    break
                n = n.ref
            if (n.ref == None):
                print("No node found")
            else:
                n.ref = new_node
                new_node.ref = m

    
    def del_front(self):
        n = self.head
        if(n == None):
            print("list is empty")
        else:
            n = n.ref 
            self.head = n
    
    def del_end(self):
        n = self.head
        if(n.ref == None):
            self.head = None
        else:
            while(n.ref.ref != None):
                n = n.ref
            if(n.ref == None):
                print("No nodes")
            else:
                n.ref = None
                
    def del_byvalue(self,x):
        n = self.head
        if(n.ref == None and n.data == x):
            self.head = None
        elif (n.ref == None and n.data != x):
            print("no nodes")
        else:
            while(n.ref != None):
                if(n.ref.data == x):
                    break
                n = n.ref
            m = n.ref
            m = m.ref
            n.ref = m
            
p = linkedlist()
p.add_front(5)
p.del_byvalue(5)
p.add_front(4)
p.add_front(3)
p.add_front(2)
p.add_front(1)
p.add_end(10)
p.add_end(9)
p.add_end(8)
p.insert_after(20, 5)
p.insert_before(30, 1)
p.insert_after(15, 8)
p.insert_before(100, 9)
p.printll()
print('\n')
p.del_front()
p.del_end()
p.del_byvalue(10)
p.del_byvalue(15)
p.printll()