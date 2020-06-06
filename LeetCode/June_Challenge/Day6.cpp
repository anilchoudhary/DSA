class Solution {
public:
	vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
		bool isPresent[people.size()];
		for (int i = 0; i < people.size(); i++)
			isPresent[i] = false;

		vector<vector<int>> result(people.size(), vector<int> (2, -1));

		sort(people.begin(), people.end());
		int prev = -1;
		for (int i = 0; i < people.size(); i++)
		{
			vector<int> v = people[i];
			int count = v[1];
			for (int j = 0; j < people.size(); j++)
			{
				if (isPresent[j] == false || result[j][0] == v[0])
				{
					count--;
				}
				if (count == -1)
				{
					prev = j;
					break;
				}
			}
			result[prev] = v;
			isPresent[prev] = true;
		}

		return result;
	}
};