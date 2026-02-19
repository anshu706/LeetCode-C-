class Solution
{
public:
    char findTheDifference(string s, string t)
    {

        int freq[26] = {0};

        // count characters in s
        for (int i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
        }

        // subtract characters in t
        for (int i = 0; t[i] != '\0'; i++)
        {
            freq[t[i] - 'a']--;
        }

        // find the leftover character
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                return 'a' + i;
            }
        }

        return ' '; // should never reach here
    }
};