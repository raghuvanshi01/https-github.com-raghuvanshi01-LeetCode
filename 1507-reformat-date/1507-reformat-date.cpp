class Solution {
public:
    string reformatDate(string date) {
          unordered_map<string, string> months = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},{"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},{"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        istringstream s(date); 
        // get day
        string day; s >> day;
        day.pop_back(); day.pop_back();
        if (day.size() == 1)
            day = "0" + day;
        // get month
        string month; s >> month;
        // get year
        string year; s >> year;
        return year + "-" + months[month] + "-" + day;
        
    }
};