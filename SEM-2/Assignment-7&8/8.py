def decode(message: str) -> list:
    if not message or message[0] == '0':
        return []
    
    n = len(message)
    dp = [[] for _ in range(n + 1)]
    dp[0] = [""]

    for i in range(1, n + 1):
        if message[i - 1] != '0':
            for prefix in dp[i - 1]:
                dp[i].append(prefix + chr(int(message[i - 1]) + ord('A') - 1))

        if i > 1 and '10' <= message[i - 2: i] <= '26':
            for prefix in dp[i - 2]:
                dp[i].append(prefix + chr(int(message[i - 2: i]) + ord('A') - 1))
            
    return dp[n]

message = input("Enter the encoded message: ")
print(decode(message))
