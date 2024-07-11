/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:12:01 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/10 19:44:27 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextReplacer.hpp"

TextReplacer::TextReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {
    if (filename.empty()) {
        throw std::invalid_argument("Error: Filename cannot be empty.");
    }
    if (s1.empty()) {
        throw std::invalid_argument("Error: String to be replaced (s1) cannot be empty.");
    }
}

void TextReplacer::replace() {
    std::ifstream inputFile(filename.c_str()); // Convert std::string to const char*
    if (!inputFile) {
        throw std::runtime_error("Error: File " + filename + " does not exist or cannot be opened.");
    }

    std::ofstream outputFile((filename + ".replace").c_str()); // Convert std::string to const char*
    if (!outputFile) {
        throw std::runtime_error("Error: Could not open file for writing.");
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceOccurrences(line) << std::endl;
    }
}

std::string TextReplacer::replaceOccurrences(const std::string& line) {
    std::string result;
    size_t pos = 0;
    size_t startPos = 0;
    while ((pos = line.find(s1, startPos)) != std::string::npos) {
        result.append(line, startPos, pos - startPos);
        result.append(s2);
        startPos = pos + s1.length();
    }
    result.append(line, startPos, std::string::npos);
    return result;
}
