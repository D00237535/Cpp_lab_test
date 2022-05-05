//

#ifndef SOLUTION_TRACK_H
#define SOLUTION_TRACK_H

#include <iostream>
#include <string>

// Question 1 code

struct Track {
private:
    std::string title;
    int duration;

public:
    Track(std::string, int);

    std::string getTitle(void);

    int getDuration(void);

    void setTitle(std::string);

    void setDuration(int);

    friend std::ostream &operator<<(std::ostream &os, const Track &track);
};

// end of Track class


#endif //SOLUTION_TRACK_H
