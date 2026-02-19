class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int size = s.size();
        int arr[26] = {0};

        for (int i = 0; i < size; i++)
        {
            arr[s[i] - 'a']++;

            if (arr[s[i] - 'a'] == 2)
            {
                return s[i];
            }
        }
        return 0;
    }
};