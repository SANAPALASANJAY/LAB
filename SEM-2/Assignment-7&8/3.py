class Account:
    def __init__(self, acc_no, pin, bal):
        self.acc_no = acc_no
        self.pin = pin
        self.bal = bal

class Bank:
    def __init__(self):
        self.accounts = []
    
    def create_acc(self):
        print("WELCOME TO THE --BANK--")
        accnum = len(self.accounts) + 1
        print(f"YOUR ACCOUNT NUMBER IS {accnum}")
        while True:
            try:
                pin = int(input("PLEASE SET A SIX-DIGIT PIN: "))
                if 100000 <= pin <= 999999:
                    break
                else:
                    print("ENTER A VALID SIX-DIGIT PIN!! TRY AGAIN")
            except ValueError:
                print("INVALID INPUT! PLEASE ENTER NUMBERS ONLY.")
        
        depamt = float(input("Enter the amount for your first deposit: "))
        acc = Account(accnum, pin, depamt)
        self.accounts.append(acc)
        print(f"ACCOUNT {accnum} CREATED SUCCESSFULLY WITH BALANCE ₹{depamt}")

    def get_bal(self, accno):
        if 1 <= accno <= len(self.accounts):
            return self.accounts[accno - 1].bal
        else:
            print("NO ACCOUNT FOUND :|")
            return None
    
    def deposit(self, accno):
        if 1 <= accno <= len(self.accounts):
            num = accno - 1
        else:
            print("NO ACCOUNT FOUND :|")
            return
        
        for _ in range(5):
            pin = int(input("PLEASE ENTER YOUR SIX-DIGIT PIN: "))
            if pin == self.accounts[num].pin:
                amt = float(input("ENTER AMOUNT TO DEPOSIT: "))
                if amt <= 0:
                    print("INVALID DEPOSIT AMOUNT!")
                    return
                self.accounts[num].bal += amt
                print(f"DEPOSIT SUCCESSFUL! NEW BALANCE: ₹{self.accounts[num].bal}")
                return
            else:
                print("INCORRECT PIN!! TRY AGAIN")
        
        print("Try Limit Exceeded :(")
    
    def withdraw(self, accno):
        if 1 <= accno <= len(self.accounts):
            num = accno - 1
        else:
            print("NO ACCOUNT FOUND :|")
            return

        for _ in range(5):
            pin = int(input("PLEASE ENTER YOUR SIX-DIGIT PIN: "))
            if pin == self.accounts[num].pin:
                amt = float(input("ENTER AMOUNT TO WITHDRAW: "))
                if amt <= 0:
                    print("INVALID WITHDRAWAL AMOUNT!")
                    return
                if amt > self.accounts[num].bal:
                    print("INSUFFICIENT FUNDS!")
                else:
                    self.accounts[num].bal -= amt
                    print(f"WITHDRAWAL SUCCESSFUL! NEW BALANCE: ₹{self.accounts[num].bal}")
                return
            else:
                print("INCORRECT PIN!! TRY AGAIN")
        
        print("Try Limit Exceeded :(")
    
    def transfer(self, accno, tamt):
        if 1 <= accno <= len(self.accounts):
            num = accno - 1
        else:
            print("NO ACCOUNT FOUND :|")
            return
        
        for _ in range(5):
            pin = int(input("PLEASE ENTER YOUR SIX-DIGIT PIN: "))
            if pin == self.accounts[num].pin:
                tacc = int(input("Enter the account number of the receiver: "))
                if 1 <= tacc <= len(self.accounts):
                    tnum = tacc - 1
                else:
                    print("NO ACCOUNT FOUND :|")
                    return
                
                if tamt <= 0:
                    print("INVALID TRANSFER AMOUNT!")
                    return
                
                if tamt > self.accounts[num].bal:
                    print("INSUFFICIENT FUNDS!")
                    return
                
                self.accounts[num].bal -= tamt
                self.accounts[tnum].bal += tamt
                print(f"TRANSFER SUCCESSFUL! NEW BALANCE: ₹{self.accounts[num].bal}")
                return
            else:
                print("INCORRECT PIN!! TRY AGAIN")
        
        print("Try Limit Exceeded :(")

# Example usage
SBI = Bank()
SBI.create_acc()
print("Balance:", SBI.get_bal(1))
SBI.deposit(1)
SBI.withdraw(1)
