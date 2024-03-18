class Solution {
public:
    string countSay(string digit){
        string ans="";
        // cout<<digit.size()<<"\n";
        for(int i=0;i<digit.size();){
            int count=1;int j=i+1;
            while(j<digit.size() && digit[j]==digit[i]){
                count+=1;
                j++;
            }
            // cout<<to_string(digit[i])<<" ";
            // cout<<j<<" ";
            ans+=(to_string(count)+digit[i]);
            // cout<<ans<<" ";
            i=j;
        }
        return ans;
    }
    string countAndSay(int n) {
       string res = "1";
       if(n==1)
       return res;
       else{
        for(int i=2;i<=n;i++){
            res=countSay(res);
            // cout<<res<<"\n";
        }
       }
       return res;
    }
};