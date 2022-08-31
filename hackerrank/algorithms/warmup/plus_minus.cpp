void plusMinus(vector<int> arr) {
    double positive=0,negative=0,zero=0;
    for(auto x : arr)
    {
        if (x>0) positive++;
        else if (x<0)negative++;
        else
            zero++;
    }   
    cout<<positive/arr.size()<<'\n';
    cout<<negative/arr.size()<<'\n';
    cout<<zero/arr.size()<<'\n';
}
