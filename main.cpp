#include <iostream>
#include "lib/sqlite3.h"
#include <unistd.h>
#include "model/DatabaseManager.h"
#include "controller/UserController.h"
#include "controller/PostController.h"
#include "controller/FriendController.h"
#include "controller/ProfileController.h"
#include <QApplication>
#include "QTProjectFiles/graphicInterface/loginpage.h"
#include "QTProjectFiles/graphicInterface/mainwindow.h"
#include "QTProjectFiles/graphicInterface/postswindow.h"
#include "QTProjectFiles/graphicInterface/profilewindow.h"
#include "QTProjectFiles/graphicInterface/friendswindow.h"
#include "QTProjectFiles/graphicInterface/explorewindow.h"
#include "QTProjectFiles/graphicInterface/editprofile.h"



int main(int argc, char *argv[]) {
    // char cwd[1024]; // record the current working directory
    // if (getcwd(cwd, sizeof(cwd)) != nullptr) {
    //     std::cout << "current working directory: " << cwd << std::endl;
    // }
    // std::cout << "Start SnackMap ..." << std::endl;

    // start
    // initialize database

    QApplication a(argc, argv);
    loginPage w; //switch this to MainWindow for template file
    w.show();
    return a.exec();

    /*
    DatabaseManager& dbManager = DatabaseManager::getInstance();
    dbManager.initializeDatabase();
    std::cout << "Database initialization completed." << std::endl;
    // use insert data test
    dbManager.insertSampleData();


    // std::cin.ignore(); // 清除输入缓冲区
    // std::string username, password;
    // std::cout << "User name：";
    // std::getline(std::cin, username);
    // std::cout << "Password：";
    // std::getline(std::cin, password);

    int choice;
    do {
        std::cout << "\n===== Main Menu =====\n";
        std::cout << "1. Create User\n";
        std::cout << "2. View Friend Posts\n";
        std::cout << "3. Add Friend\n";
        std::cout << "4. Edit Profile\n";
        std::cout << "5. View User Posts\n";
        std::cout << "0. Exit\n";
        std::cout << "Please enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Exit SnackMap ..." << std::endl;
            break;
            case 1:
                // user controller: input username, password, email and insert into database
                    UserController userController;
            userController.createUser();
            break;

            case 2: {
                // Use PostController to get friend posts
                PostController postController;
                int userId1;
                std::cout << "Please enter your User ID: ";
                std::cin >> userId1;

                // Fetch friend's posts
                std::vector<std::vector<std::string>> friendPosts = postController.getFriendPosts(userId1);

                // Check if there are any posts
                if (friendPosts.empty()) {
                    std::cout << "No posts found for your friends" << std::endl;
                } else {

                    // Print each friend's post details

                    std::cout << "Friend's posts:" << std::endl;
                    std::cout << "----------------------------------" << std::endl;
                    for (const auto& post : friendPosts) {
                        // Print all elements in the inner vector (post details) line by line
                        for (const auto& field : post) {
                            std::cout << field << std::endl;
                        }
                        std::cout << "----------------------------------" << std::endl;
                    }
                }
                break;
            }

            case 3:{
                // 使用 FriendController 添加好友
                FriendController friendController;
                int userId2, friendId;

                std::cout << "Please enter your User ID: ";
                std::cin >> userId2;
                std::cout << "Please enter the Friend ID to add: ";
                std::cin >> friendId;

                if (friendController.addFriend(userId2, friendId)) {
                    std::cout << "Friend added successfully！" << std::endl;
                } else {
                    std::cout << "Failed to add friend！" << std::endl;
                }
                break;
            }
            case 4: { // 修改个人资料
                ProfileController profileController;
                int userId;
                std::string name, bio, profilePicture;

                std::cout << "Please enter the user ID: ";
                std::cin >> userId;
                std::cin.ignore(); // 清除换行符
                std::cout << "Please enter a new username:";
                std::getline(std::cin, name);
                std::cout << "Please enter a new bio: ";
                std::getline(std::cin, bio);
                std::cout << "Please enter a new profile picture path: ";
                std::getline(std::cin, profilePicture);

                if (profileController.updateProfile(userId, name, bio, profilePicture)) {
                    std::cout << "Profile updated successfully！" << std::endl;
                } else {
                    std::cout << "Update failed, please check whether the user ID exists！" << std::endl;
                }
                break;
            }
            case 5: { // New option for viewing user's posts
                // test1
                PostController postController;
                
                int userId;
                std::cout << "Please enter the User ID: ";
                std::cin >> userId;

                std::vector<std::string> userPosts = postController.getUserPosts(userId);
                if (userPosts.empty()) {
                    std::cout << "No posts found for User ID: " << userId << std::endl;
                } else {
                    std::cout << "User's post content:" << std::endl;
                    for (const auto& post : userPosts) {
                        std::cout << post << std::endl;
                    }
                }
                break;
            }

            default:
                std::cout << "Invalid choice, please try again!" << std::endl;
            break;
        }
    } while (choice != 0);

    // user controller: input username, password, email and insert into database
    // UserController userController;
    // userController.createUser();

    // use PostController to get friend posts
    // PostController postController;
    // int userId = 1; // assume the user id is 1
    // std::vector<std::string> friendPosts = postController.getFriendPosts(userId);
    //
    // // print friend's post content
    // std::cout << "friend's post content:" << std::endl;
    // for (const auto& post : friendPosts) {
    //     std::cout << post << std::endl;
    // }

    return 0;
    */
    
}
