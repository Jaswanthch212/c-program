#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_LEN 100

typedef struct Task {
    int id;
    char description[MAX_TASK_LEN];
    struct Task* next;
} Task;

Task* head = NULL;
int next_id = 1;

void addTask(char* desc) {
    Task* newTask = (Task*)malloc(sizeof(Task));
    if (newTask == NULL) {
        printf("Memory allocation failed\\n");
        return;
    }
    newTask->id = next_id++;
    strncpy(newTask->description, desc, MAX_TASK_LEN - 1);
    newTask->description[MAX_TASK_LEN - 1] = '\\0';
    newTask->next = NULL;

    if (head == NULL) {
        head = newTask;
    } else {
        Task* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newTask;
    }
    printf("Task added successfully.\\n");
}

void viewTasks() {
    if (head == NULL) {
        printf("No tasks in the list.\\n");
        return;
    }
    Task* current = head;
    printf("--- To-Do List ---\\n");
    while (current != NULL) {
        printf("ID %d: %s\\n", current->id, current->description);
        current = current->next;
    }
    printf("------------------\\n");
}

void deleteTask(int id) {
    Task* current = head;
    Task* previous = NULL;

    while (current != NULL && current->id != id) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Task ID %d not found.\\n", id);
        return;
    }

    if (previous == NULL) {
        head = current->next;
    } else {
        previous->next = current->next;
    }
    free(current);
    printf("Task ID %d deleted successfully.\\n", id);
}

void freeMemory() {
    Task* current = head;
    Task* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
}

int main() {
    int choice, id;
    char desc[MAX_TASK_LEN];

    while (1) {
        printf("\\nMenu:\\n");
        printf("1. Add Task\\n");
        printf("2. View Tasks\\n");
        printf("3. Delete Task\\n");
        printf("4. Exit\\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                scanf(" %99[^\n]", desc);
                addTask(desc);
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                printf("Enter task ID to delete: ");
                scanf("%d", &id);
                deleteTask(id);
                break;
            case 4:
                freeMemory();
                printf("Exiting program.\\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\\n");
        }
    }
    return 0;
}
