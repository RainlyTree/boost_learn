TIME1=timer_learn 
DIS=progress_display

all:timer_learn progress_display date_time_test

timer_learn:timer_learn.cpp
	g++ $^ -o $(TIME1)
progress_display:progress_display_test.cpp 
	g++ $^ -o $(DIS) -std=c++11
date_time_test:date_time_test.cpp
	g++ $^ -o $@ -std=c++11 -L/usr/lib -lboost_date_time

clean:
	rm $(TIME1) $(DIS)
