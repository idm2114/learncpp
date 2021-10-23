

struct Timer {
    Timer () {
        timestamp = 
    }

    ~Timer () {
        printf("The difference is %d seconds\n", timestamp - now);
    }

    int timestamp;

