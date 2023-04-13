/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:35:37 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/13 16:19:50 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool StringReplace::replace(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream input_file(filename.c_str());
    if (s1.empty()) {
        return false;
    }
    if (!input_file.is_open()) {
        return false;
    }

    std::string output_filename = filename + ".replace";
    std::ofstream output_file(output_filename.c_str());
    if (!output_file.is_open()) {
        return false;
    }

    std::string line;
    while (std::getline(input_file, line)) {
        size_t index = 0;
        while ((index = line.find(s1, index)) != std::string::npos) {
            line.replace(index, s1.length(), s2);
            index += s2.length();
        }
        output_file << line << '\n';
    }

    input_file.close();
    output_file.close();
    return true;
}
