sort(nums.begin(), nums.end(), [&](int a, int b){
    int fa = func(a);
    int fb = func(b);
    if (fa == fb) 
      return a < b;
    return fa < fb;
});
