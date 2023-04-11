/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:29:57 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 12:38:43 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "sed.hpp"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }
    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    StringReplace string_replace;
    if (!string_replace.replace(filename, s1, s2)) {
        std::cerr << "Error: failed to replace string in file " << filename << "\n";
        return 1;
    }
    std::cout << "Successfully replaced all occurrences of \"" << s1 << "\" with \"" << s2 << "\" in file " << filename << "\n";
    return 0;
}
