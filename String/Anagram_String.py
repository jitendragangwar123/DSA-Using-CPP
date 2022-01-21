def isAnagram(str1,str2):
        #code here
        n1 = len(str1)
        n2 = len(str2)
     
        # If length of both strings is not same, then
        # they cannot be anagram
        if n1 != n2:
            return 0
     
        # Sort both strings
        str1 = sorted(str1)
        str2 = sorted(str2)
     
        # Compare sorted strings
        for i in range(0, n1):
            if str1[i] != str2[i]:
                return 0
        return 1
s1=input()
s2=input()
if(isAnagram(s1,s2)):
    print("YES")
else:
    print("NO")
