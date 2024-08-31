#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class EventLogger {
public:
    void logEvent(const string& event, const int now) {
        events.insert(event);
        eventTimestamps[event] = now;
    }

    void displayEvents() const {
        for (const auto& event : events) {
            cout << "Event: " << event 
                 << " | Timestamp: " << eventTimestamps.at(event) << endl;
        }
    }

    int getTimestamp(const string& event) const {
        if (eventTimestamps.find(event) != eventTimestamps.end()) {
            return eventTimestamps.at(event);
        }
        throw runtime_error("Event not found");
    }

private:
    set<string> events;
    map<string, int> eventTimestamps;
};

int main() {
    EventLogger logger;

    logger.logEvent("User logged in", 1);
    logger.logEvent("File uploaded", 2);
    logger.logEvent("User logged out", 3);
    logger.logEvent("User logged in", 4);

    logger.displayEvents();

    try {
        int timestamp = logger.getTimestamp("User logged in");
        cout << "\nTimestamp of 'User logged in': " << timestamp;
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
