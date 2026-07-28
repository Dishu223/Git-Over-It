class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int mid = n/2;

        sort(s.begin(), s.begin() + mid); 

        for(int i=0; i<mid; i++)
        {
            s[n-1-i] = s[i];
        }
        return s;
    }
};

/* we find mid and then sort string from start to mid(exclusive).
now, any palindrome is mirrored at the center, so we have the smallest string possible (sorted) at the start and 
then we just put the elements of that part on the right part, in reverse order.
hence we will have lexicographically smallest permutation. */