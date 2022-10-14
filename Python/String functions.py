
class Stringop:
    def Functn():
        print("1.To display word with the longest length")
        print("2.To determines the frequency of occurrence of particular character in the string")
        print("3.To check whether given string is palindrome or not")
        print("4.To display index of first appearance of the substring")
        print("5.To count the occurrences of each word in a given string")
        
    def lengthmx(stg):
        maxstgr = ''
        for stgrwrd in stg:
            if len(stgrwrd) > len(maxstgr):
                maxstgr = stgrwrd
        print (maxstgr)
        
    def occurce(stg):
        listr=[]
        lsty={}
        for i in stg:
            for j in range(len(i)):
                listr.append(i[j])
        for i in listr:
            if i in lsty:
                lsty[i]=lsty[i]+1
            else:
                lsty[i]=1
        print("The frequency of occurence of a character in the string is as follows:",lsty)
        
    def palrome(stg):
        if stg[::-1]==stg:
           print("The given string is a palindrome")
        else:
            print("The given string is not a palindrome")
        
    def firstapp(strmx):
        substr= input("Enter Substring you would like to check index for.")
        lensubstr = len(substr)
        indexl = 0
        j = 0
        for i in range(len(strmx)):
            if substr[j] == strmx[i]:
                j += 1
                if j == lensubstr:
                    indexl = i - (lensubstr -1)
                    break
            else:
                j = 0    
        print("Index of the first appearance of the substring:", indexl)
        
    def wordappr(stg):
        mylst={}
        for i in stg:
            if i in mylst:
                mylst[i]=mylst[i]+1
            else:
                mylst[i]=1
        
        print("The occurence of each word in the string is as follows:" ,mylst)


chrm = str
ch = str
while (chrm !='N'):
    Stringop.Functn()
    ch=(input("Enter choice corresponding to operation you would like to carry out:"))
    print("Enter the string you would like to compute the operations on.")
    strmx= input()
    stg = strmx.split()
    if ch == '1':
        print("The longest world in the string is ")
        Stringop.lengthmx(stg)
        print("Would you like to continue the program? (Y/N)")
        chrm=(input("Enter your choice:"))
    elif ch == '2':
        Stringop.occurce(stg)
        print("Would you like to continue the program? (Y/N)")
        chrm=(input("Enter your choice:"))
    elif ch == '3':
        Stringop.palrome (stg)
        print("Would you like to continue the program? (Y/N)")
        chrm=(input("Enter your choice:"))
    elif ch == '4':
        Stringop.firstapp(strmx)
        print("Would you like to continue the program? (Y/N)")
        chrm=(input("Enter your choice:"))
       
    elif ch == '5':
        Stringop.wordappr(stg)
        print("Would you like to continue the program? (Y/N)")
        chrm=(input("Enter your choice:"))
    else:
        print("Enter a valid choice.")












