/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:46:04 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 20:46:09 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

public:
    Zombie(std::string name);
    ~Zombie();
    void announce() const;

private:
    std::string _name;

};

#endif
