#include "UUTime.h"
// Default Constructor
UUTime::UUTime() {
	hours_ = 10;
	minutes_ = 00;
	//Default time should be 10:00
}

// Custom Constructor
UUTime::UUTime(int hours, int minutes) {
	if (ValidateTime(minutes, hours) == 1) {
		hours_ = hours;
		minutes_ = minutes;
	}

	else {
		hours_ = 10;
		minutes_ = 00;
	}

	//validate minutes and hours. If invalid arguments are supplied set to default time
}

//Returns Hours
int UUTime::GetHours() const {
	return hours_;
}

// Validates and sets hours to either correct hours (true) OR default time (false)
void UUTime::SetHours(int hours) {
	if (ValidateHours(hours) == 1) {
		hours_ = hours;
	}
	else {
		hours_ = 10;
		minutes_ = 00;
	}
}

// Returns Minutes
int UUTime::GetMinutes() const {
	return minutes_;
}

// Validates and Sets minutes to either correct minutes (true) OR default time (false)
void UUTime::SetMinutes(int minutes) {
	if (ValidateMinutes(minutes) == 1) {
		minutes_ = minutes;
	}
	else {
		hours_ = 10;
		minutes_ = 00;
	}
}

// Sets time (Hours & Minutes)
void UUTime::SetTime(int hours, int minutes) {
	if (ValidateTime(hours, minutes) == 1) {
		hours_ = hours;
		minutes_ = minutes;
	}
	else {
		hours_ = 10;
		minutes_ = 00;
	}
}

std::string UUTime::GetTime() const {

	std::string hours = std::to_string(hours_);
	std::string minutes = std::to_string(minutes_);
	std::string time = hours + ":" + minutes;

	return time;
	//Time string should be formatted "hh:mm" e.g. 09:09 using 24 hour clock
}


// Validates Hours & Minutes
bool UUTime::ValidateTime(int hours, int minutes) {
	bool condition = false;

	if (hours < 0 || hours > 24) {
		return false;
	}
	
	else if (minutes < 0 || minutes > 60 ) {
		return false;
	}

	else { return true; 
	}
}

// Validates Hours Only
bool UUTime::ValidateHours(int hours) {
	bool condition = false;

	if (hours < 0 || hours > 24) {
		return false;
	}

	else {
		return true;
	}
}

// Validates Minutes Only
bool UUTime::ValidateMinutes(int minutes) {
	bool condition = false;

	if (minutes < 0 || minutes > 60) {
		return false;
	}

	else {
		return true;
	}
}