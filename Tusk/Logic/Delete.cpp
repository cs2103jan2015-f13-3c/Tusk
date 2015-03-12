#include "Delete.h"

Delete::Delete(void) {
}

Delete::~Delete(void) {
}

void Delete::execute(std::vector<Task>& mainTaskList, std::vector<Task> displayedTaskList, Task& task) {
	int index;
	index = std::stoi(task.getTitle(), nullptr, 10);
	task = displayedTaskList[index - 1];
	
	for (int i = 0; i < mainTaskList.size(); i++) {
		if (mainTaskList[i].getTitle() == task.getTitle()) {
			mainTaskList.erase(mainTaskList.begin() + i);
		}
	}
}