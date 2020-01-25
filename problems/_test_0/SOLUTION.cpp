


//////////////////////////////////////////////////////////////////////////
vector<int> arrayRankTransform(vector<int>& arr) 
{
    map<int, int> _map;
    for (auto& n : arr)
    {
        _map[n] = 0;
    }
    int i = 1;
    for (auto& m : _map)
    {
        m.second = i++;
    }
    for (auto& n : arr)
    {
        n = _map[n];
    }
    return arr;
}

//////////////////////////////////////////////////////////////////////////
vector<int> _solution_run(vector<int>& arr)
{
	return arrayRankTransform(arr);
}

//#define USE_SOLUTION_CUSTOM
//vector<int> _solution_custom(TestCases &tc)
//{
//}

//////////////////////////////////////////////////////////////////////////
vector<string> _get_test_cases_string()
{
	return {};
}

#define USE_GET_TEST_CASES_FILESTREAM
string _get_test_cases_filestream()
{
	return "../../problems/_test_0/tests.txt";
}

