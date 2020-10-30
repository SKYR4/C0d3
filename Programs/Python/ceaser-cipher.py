def encrypt(word):
	cipher=""
	word=word.lower()
	for i in word:
		if(i==" "):
			cipher+=i
		else:
			c=chr((ord(i)+3-97)%26+97)
			cipher+=c
	print("CIPHER:",cipher)
	return cipher


def decrpyt(word):
	word=word.lower()
	plain=""
	for i in word:
		if(i==" "):
			plain+=i
		else:
			p=chr((ord(i)-3-97)%26+97)
			plain+=p
	print("DECRYPTED:",plain)


choice="y";
while(choice == "y"):
	num=int(input("Enter option : 1.Encrypt 2.DECRYPT"))
	if(num == 1):

		word=input("Enter the word :: ")
		cipher=encrypt(word)
		decry=input("Do you want to decrypt this word (y/n) ")
		if(decry == "y" ):
			decrpyt(cipher)

	else:
		word=input("Enter the word :: ")
		decrpyt(word)
	choice=input("DO you want to continue (y/n)::")