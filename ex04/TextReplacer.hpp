/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:11:35 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/10 19:28:31 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXT_REPLACER_HPP
#define TEXT_REPLACER_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>

class TextReplacer {
public:
    TextReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
    void replace();

private:
    std::string filename;
    std::string s1;
    std::string s2;

    std::string readFile();
    std::string replaceOccurrences(const std::string& content);
    void writeFile(const std::string& content);
};

#endif