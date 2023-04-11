/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:29:57 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 18:46:25 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Arguments: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    StringReplace stringReplace;
    if (!stringReplace.replace(filename, s1, s2)) {
        std::cerr << RED "Error: failed to find the string or filename" DEFAULT<< filename << std::endl;
        return (1);
    }
    std::cout << BLUE "Successfully replaced all occurrences of \"" << s1 << "\" with \"" << s2 << "\" in file " << filename << std::endl;
    return (0);
}
