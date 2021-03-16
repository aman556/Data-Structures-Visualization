#include "header/header.h"
#include "header/bst.h"
#include "header/linkedlist.h"
#include "header/doublelinkedlist.h"


int main(int argc, char **argv)//This is the main function
{

    int s;

    while(1)
    {
        system("clear");
        cout << "\n\t\t\tWelcome To The Virtualization Menu\t\t\t\t\n";
        cout << "1. Binary search tree \n";
        cout << "2. Single linked list\n";
        cout << "3. Double linked list\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice = ";
        cin >> s;
        cout << endl;
        switch (s)
        {

        case 1 :
            printf("\t\t\tWelcome to binary search tree menu\t\t\t\t\n");
            glutInit(&argc, argv);
            glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
            glutInitWindowSize(700, 500);
            glutInitWindowPosition(0, 0);
            glutCreateWindow("Binary Search Tree");
            glClearColor(0.752941, 0.752941, 0.752941, 1.0);
            glutDisplayFunc(display);
            glutCreateMenu(bst_menu);
            glutAddMenuEntry("Insert Node", 1);
            glutAddMenuEntry("Delete Node", 2);
            glutAddMenuEntry("Preorder Traversal", 3);
            glutAddMenuEntry("Inorder Traversal", 4);
            glutAddMenuEntry("Postorder Traversal", 5);
            glutAddMenuEntry("Clear Tree", 6);
            glutAddMenuEntry("Exit", 7);
            glutAttachMenu(GLUT_RIGHT_BUTTON);
            init();
            glutMainLoop();
            break;

        case 2 :
            printf("\t\t\tWelcome to single linked list menu\t\t\t\t\n");
            glutInit(&argc, argv);
            glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
            glutInitWindowSize(700, 500);
            glutInitWindowPosition(0, 0);
            glClearColor(0.752941, 0.752941, 0.752941, 1.0);
            glutCreateWindow("SINGLY LINKED LIST");
            glutDisplayFunc(renderscene);
            glutCreateMenu(llmenu);
            glutAddMenuEntry("Insert Front", 1);
            glutAddMenuEntry("Insert Rear", 2);
            glutAddMenuEntry("Delete Front", 3);
            glutAddMenuEntry("Delete Rear", 4);
            glutAddMenuEntry("Delete Specified", 5);
            glutAddMenuEntry("Exit", 6);
            glutAttachMenu(GLUT_RIGHT_BUTTON);
            llinit();
            glutMainLoop();
            break;

        case 3 :
            head = dlgetnode();
            head->rlink = head;
            head->llink = head;
            head->info = NULL;
            printf("\t\t\t\tWelcome to double linked list menu\t\t\t\t\n");
            glutInit(&argc, argv);
            glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
            glutInitWindowSize(700, 500);
            glutInitWindowPosition(0, 0);
            glClearColor(0.752941, 0.752941, 0.752941, 1.0);
            glutCreateWindow("Doubly Linked List");
            glutCreateMenu(dlmenu);
            glutAddMenuEntry("InsertFront", 1);
            glutAddMenuEntry("InsertRear", 2);
            glutAddMenuEntry("InsertLeft", 3);
            glutAddMenuEntry("InsertRight", 4);
            glutAddMenuEntry("DeleteFront", 5);
            glutAddMenuEntry("DeleteRear", 6);
            glutAddMenuEntry("DeleteSpecified", 7);
            glutAddMenuEntry("Exit", 8);
            glutAttachMenu(GLUT_RIGHT_BUTTON);
            glutDisplayFunc(renderscenedl);
            dlinit();
            glutMainLoop();
            break;
      
        case 4 :
            exit(0);
            break;

        default:
            cout << "Enter correct option !!!\n";
            break;

        }

    }
    
    return 0;
}

