# A little trick

message = input("In put you message\n")

translated =''

i = len(message)-1
while i>=0:
    translated = translated + message[i]
    i-=1 
print(translated)
