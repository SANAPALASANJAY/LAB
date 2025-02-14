class Password_manager:
    def __init__(self):
        self.old_passwords = []
    
    def get_password(self):
        if self.old_passwords:
            return self.old_passwords[-1]
        return None
    
    def set_password(self, password):
        if password in self.old_passwords:
            print("password aldready used")
            return False
        self.old_passwords.append(password)
        return True
    
    def is_correct(self, password):
        return password == self.get_password()
        
passes = Password_manager()
print(passes.get_password())
passes.set_password("Blueiscool043")
print(passes.get_password())
print(passes.is_correct("Blueiscool43"))
