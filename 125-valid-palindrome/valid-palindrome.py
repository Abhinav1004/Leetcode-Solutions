class Solution:
    def check_palindrome(self,s,start,end):
        if start>end:
            return True
        else:
            if s[start]!=s[end]:
                return False
            else: 
                return self.check_palindrome(s,start+1,end-1)
    def isPalindrome(self, s: str) -> bool:
        s = re.sub("[^A-Za-z0-9]","",s)
        s = re.sub(" ","",s)
        s = s.lower()
        print(s)
        return self.check_palindrome(s,0,len(s)-1)

        