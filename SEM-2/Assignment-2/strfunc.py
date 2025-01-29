#finds the greatest index of string containing the substring
def Rindex(st, subst, a=0, b=-1):
    if b == -1:
        b = len(st)
    index = -1
    for i in range(a, b):
        if st[i : i + len(subst)] == subst:
            index = i
    if index == -1:
      raise ValueError("Substring must be present")
    return index

#splits the string from right side until mentioned maxsplit into a list
def Rsplit(st, sepa, maxsplit = -1):
    count = 0
    lindex = len(st)
    ans = []
    for i in range(len(st) - 1, -1, -1):
        if st[i] == sepa:
            if ((maxsplit > 0 and count < maxsplit) or maxsplit == -1):
                ans.append(st[i+1: lindex])
                count += 1
                lindex = i
            
    ans.append(st[0:lindex])
    ans.reverse()
    return ans

#find the right most index where the subtring is present
def Rfind(st, subst, start=0, end = -1):
    if end == -1:
        end = len(st)
    index = -1
    for i in range(start, end):
        if st[i : i + len(subst)] == subst:
            index = i
    return index

#replaces a substring with desired substring upto mentioned limit in the string
def Replace(st, subst, rsub, limit = -1):
    if (limit == -1):
        limit = float("inf")
    ans = ""
    count, i = 0, 0
    while i < len(st):
        if st[i : i + len(subst)] == subst and count < limit:
            ans += rsub
            i += len(subst)
            count += 1
        else:
            ans += st[i]
            i+=1
    return ans
