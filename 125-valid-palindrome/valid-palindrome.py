
class Solution:
    def checkPalindrome(self,s,start,end):
        if start>end:
            return True
        else:
            if s[start]==s[end]:
                start+=1;end-=1;
                return self.checkPalindrome(s,start,end);
            else:
                return False; 
    def isPalindrome(self, s: str) -> bool:
        s = s.replace(" ","")
        s = s.lower()
        ascii_string = "aasdfghjklqwertyuiopzxcvbnm1234567890"
        s = "".join([i for i in s if i in ascii_string])
        return self.checkPalindrome(s,0,len(s)-1)

        