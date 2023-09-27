#include <bits/stdc++.h>

using namespace std;


/// Code xét học bổng
/// ----------------------------------------------
void xetHB (int DRL, bool diemF, int tongTC, float TBHK, bool kyLuat)
{
    if ((DRL < 0 || DRL > 100)
            || (tongTC < 0)
            || ((TBHK < 0) || (TBHK > 4.0)))
    {
        cout << "Input khong hop le";
    }
    else if ((DRL < 70) || (diemF)
             || (tongTC < 14) || (TBHK < 3.2)
             || (kyLuat))
    {
        cout << "Khong du dieu kien xet HB";
    }
    else
    {
        cout << "Ban du dieu kien xem xet HB";
    }
}
///-----------------------------------------------
int main()
{
    /// Code thử các ca kiểm thử
    freopen("XetHB.inp", "r", stdin);

    int numTestcase;
    cin >> numTestcase;

    while(numTestcase--)
    {
        int DRL, tongTC;
        bool diemF, kyLuat;
        float TBHK;
        cin >> DRL >> diemF >> tongTC >> TBHK >> kyLuat;
        xetHB(DRL, diemF, tongTC, TBHK, kyLuat);
        cout << '\n';
    }
    return 0;
}
