

translated =''

LETTER1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
LETTER2 = "abcdefghijklmnopqrstuvwxyz"

mode = input('Input \'e\' for encrypt or \'d\' to decrypt\n')


message = input('Say something\n')
train = []

for i in message:
    train.append(i)


key = input('Tell me your key number: (between 1 to 25)\n') 
key = int(key)  # Convert into int 
    
if key<1 or key>25 : 
    print('Invalid key\n')
    pass 
else:
    posit = 0       # Get the position of the character in message, posit which means position is static
   
    for symbol in message:        # Walk through the message string and match which char in our LETTER
        if symbol in LETTER1:
            num = LETTER1.find(symbol)  # num is variational it record the position when the character was shifted 
            if mode == 'e' or mode =='E':
                num = num + key 
            elif mode == 'd' or mode == 'D':
                num = num - key
            # Handle the invild value: num over the range of LETTER's index
            if num >= len(LETTER1):
                num = num - len(LETTER1)
            elif num <0:
                num = num + len(LETTER1)
            # Substitute
            train[posit] = LETTER1[num] 
        else:
            pass
        if posit+1<len(message):
            posit+=1

            #for i in range(0,len(train)):
            #    translated+=train[i]
           # print("First: "+translated+'\n')
    
    posit = 0

    for symbol in message: 
        if symbol in LETTER2:
            num = LETTER2.find(symbol)
            if mode =='e' or mode =='E':
                num = num + key
            elif mode =='d' or mode == 'D':
                num = num - key

            if num >= len(LETTER2):
                num = num - len(LETTER2)
            elif num < 0:
                num = num + len(LETTER2)

            train[posit] = LETTER2[num]
        else:
            pass
        if posit+1<len(message):
            posit+=1
            
    for i in range(0,len(train)):
        translated+=train[i]

if mode == 'e' or mode =='E':
    print("After encrypt: \n"+translated)
    

elif mode == 'd' or mode =='D':
    print("After decrypt: \n"+translated)






