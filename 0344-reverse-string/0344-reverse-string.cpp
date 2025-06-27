class Solution {
public:
   void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    
    // Reverse in-place using two-pointer approach
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
    
    cout<<"[";
     for (int i=0;i<=s.size() - 1;i++)
     {
        
        cout<<"\""<<s[i]<<"\"";
        if (i!=0)
        cout<<",";
     } 
     cout<<"]" ;
    }
};




    
    