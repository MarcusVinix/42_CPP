/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:28:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 19:14:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool openInAndOut(std::ifstream &in, std::ofstream &out, std::string file) {
	in.open(file.c_str(), std::ifstream::in);
	if (!in.is_open())
	{
		std::cout << "Has something wrong with the file!" << std::endl;
		return (false);
	}
	file.append(".replace");
	out.open(file.c_str(), std::ofstream::out);
	if (!out.is_open())
	{
		std::cout << "Something wrong creating the new file" << std::endl;
		in.close();
		return (false);
	}
	return (true);
}

void	getCurrentBuffer(std::string &str, std::ifstream &fileIn) {
	std::stringstream buffer;

	buffer << fileIn.rdbuf();
	str = buffer.str();
	fileIn.close();
}

void	getNewBuffer(std::string curBuff, std::string &newBuff,
			std::string s1, std::string s2) {
	size_t i;

	while (curBuff.find(s1) != std::string::npos)
	{
		i = curBuff.find(s1);
		newBuff.append( curBuff.substr(0, i));
		newBuff.append( s2 );
		curBuff = curBuff.substr( i + s1.size(), curBuff.size());
	}
	newBuff.append( curBuff );
}

void	setNewFile(std::ofstream &fileOut, std::string buff) {
	fileOut << buff;
	fileOut.close();
}

void	sedIsForLosers(std::string file, std::string s1, std::string s2)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		currentBuffer;
	std::string		newBuffer;

	if (!(openInAndOut(inFile, outFile, file)))
		return ;
	getCurrentBuffer(currentBuffer, inFile);
	getNewBuffer(currentBuffer, newBuffer, s1, s2);
	setNewFile(outFile, newBuffer);
}

int	main( int argc, char *argv[]) {
	if (argc != 4)
	{
		std::cout << "Incorrect params" << std::endl;
		std::cout << "./main file s1 s2" << std::endl;
		return (1);
	}
	sedIsForLosers(argv[1], argv[2], argv[3]);
	return (0);
}