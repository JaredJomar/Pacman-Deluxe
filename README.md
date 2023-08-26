# Project_03
# Pacman++ Deluxe Project

## Objective

The objective of the "Pacman++ Deluxe Project" for the CIIC4010/ICOM4015 course was to further enhance the Pacman game by adding more features related to recursion, backtracking, sorting, and collections. The project was due on May 11, 2022.

## Project Overview

In this project, you are tasked with adding advanced features to the existing Pacman++ game. These features will incorporate concepts such as recursion, backtracking, sorting, and collections. The project is divided into three phases, each increasing in complexity.

### Phase 1 (Suggested Deadline: April 27)

- **Rank Property**: Add a rank property to the Power Ups. This rank determines the level of importance or superiority for each Power Up. A higher rank indicates a more powerful Power Up. Document the Power Ups and their respective rank levels in the README.md file.
- **Compare Method**: Implement a compare method for the Power Ups based on their ranks.
- **Power Up Collection**: Use a collection to accumulate Power Ups so that the player uses them in the order they were acquired.
- **ULTIMATE Power Up**: Introduce an ULTIMATE power up that appears when the player's score reaches 1000. When eaten, this entity activates the ULTIMATE power up, which sorts the player's owned Power Ups by rank. Use a sorting algorithm discussed in class, and ensure the Power Ups are displayed on screen in the order they will be activated.

### Phase 2 (Suggested Deadline: May 4)

- **Ghost Eyes**: When Pacman eats a ghost, spawn an entity representing the ghost's eyes at the position where the ghost was killed. These eyes should autonomously find their way back to the Ghost Spawner, following the same path that the ghost took to reach its last position. Once the eyes reach the Ghost Spawner, a new ghost should be spawned.

### Phase 3 (Suggested Deadline: May 11)

- **Pacman GPS**: Implement a GPS feature activated by pressing the '1' key. This GPS draws the path to any Power Up Entity on the map (e.g., Strawberry, Cherry). Each time the key is pressed, it should highlight the path to the selected Power Up. To achieve this, locate the entity and use a path-finding algorithm to determine the path from Pacman's current position to the chosen Power Up. Optionally, make the GPS always determine the shortest route for bonus points (specify this in the README.md).

## Project Notes

- Teams consist of two students, and you should continue working with the partner you had in PA2.
- Personal repositories will not be graded.
- Collaboration and teamwork are crucial throughout the project, with regular meetings recommended.
- Professionalism in collaboration is emphasized, considering future coworking opportunities and references.
- In case of issues with partners, follow the outlined steps for problem resolution.
- Instructions for changing the GitHub repository origin are provided.
- Ensure to join the new GitHub assignment for PA3 even if you are working with the same partner from PA2.
