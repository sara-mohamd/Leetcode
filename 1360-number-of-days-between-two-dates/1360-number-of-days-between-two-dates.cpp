class Solution {
public:
    bool isLeap(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    int daysBetweenDates(string date1, string date2) {
        int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string minDate = min(date1, date2);
        string maxDate = max(date1, date2);

        int y1 = stoi(minDate.substr(0, 4)), y2 = stoi(maxDate.substr(0, 4)),
            m1 = stoi(minDate.substr(5, 2)), m2 = stoi(maxDate.substr(5, 2)),
            d1 = stoi(minDate.substr(8)), d2 = stoi(maxDate.substr(8));

        int count = 0;
        while(!(y1 == y2 && m1 == m2 && d1 == d2))
        {
            int monthDays = months[m1];
            if(m1 == 2 && isLeap(y1))
                monthDays = 29;
            if(m1 == 12 && d1 == 31)
                y1++, m1 = 1, d1 = 1, count++;
            else if(monthDays == d1 && m1 != 12)
                m1++,  d1 = 1, count++;
            else
                count++, d1++;
        }
        return count;
    }
};