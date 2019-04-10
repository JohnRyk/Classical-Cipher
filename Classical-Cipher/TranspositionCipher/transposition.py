def encrypt(message,key):
     
    chiphertext = [''] * key
    
    for col in range(key):
        pointer = col
        while pointer<len(message):
            chiphertext[col]+=message[pointer]
            pointer+=key
    return ''.join(chiphertext)
    


def main():

    my_message = input('Tell your secret: \n')
    my_key = input('Choose a key: \n')
    chiphertext = encrypt(message=my_message,key=my_key)
    print(chiphertext+'|')

    pyperclip.copy(chiphertext)

if __name__=='__main__':
    main()
