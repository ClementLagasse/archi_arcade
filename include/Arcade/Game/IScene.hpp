/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include "../ECS/IEntityManager.hpp"
#include "../ECS/ISystemManager.hpp"

namespace Arcade {
    namespace Game {
        class IScene {
            public:
                virtual ~IScene() = default;

                /**
                 * @brief Create the scene
                 *
                 * It exists because we don't want to create all
                 * entities/component at startup time but when the scene is
                 * activated
                 *
                 * @return True if the scene was created, false otherwise
                 */
                virtual bool init();
                /**
                 * @brief Close the scene
                 *
                 * It exists because we don't want to destroy all the scene
                 * (we might still need it, but we want to dealocate some
                 * resource maybe ?)
                 */
                virtual void close();
                /**
                 * @brief Get the entity manager of the scene
                 *
                 * @return The entity manager of the scene
                 */
                virtual ECS::IEntityManager &getEntityManager() = 0;
                /**
                 * @brief Get the system manager of the scene
                 *
                 * @return The system manager of the scene
                 */
                virtual ECS::ISystemManager &getSystemManager() = 0;
        };
    } // namespace Game
} // namespace Arcade