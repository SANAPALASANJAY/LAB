print("Panagram" if len(set((input().lower()).replace(" ",""))) == 26 else "NotPanagram")
#converts input to lowercase and removes space and converts sting to set and checks if all
#alphabets are present
