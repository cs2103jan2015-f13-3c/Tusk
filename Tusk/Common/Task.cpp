//author A0108417J

#include "Task.h"

Task::Task(void) {
	_isDone = false;
}

Task::~Task(void) {
}

void Task::setTaskType(TaskType taskType) {
	_taskType = taskType;
}

void Task::setTitle(std::string title) {
	_title = title;
}

void Task::setStartingTime(Time startingTime) {
	_startingTime = startingTime;
}

void Task::setEndingTime(Time endingTime) {
	_endingTime = endingTime;
}

void Task::setStartingDate(Date startingDate) {
	_startingDate = startingDate;
}

void Task::setEndingDate(Date endingDate) {
	_endingDate = endingDate;
}

void Task::setIsDone(bool isDone) {
	_isDone = isDone;
}

TaskType Task::getTaskType() {
	return _taskType;
}

std::string Task::getTitle() {
	return _title;
}

Time Task::getStartingTime() {
	return _startingTime;
}

Time Task::getEndingTime() {
	return _endingTime;
}

Date Task::getStartingDate() {
	return _startingDate;
}

Date Task::getEndingDate() {
	return _endingDate;
}

bool Task::getIsDone() {
	return _isDone;
}