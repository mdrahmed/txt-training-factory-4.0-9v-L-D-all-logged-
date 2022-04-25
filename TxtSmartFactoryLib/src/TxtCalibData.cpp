/*
 * TxtCalibData.cpp
 *
 *  Created on: 18.02.2019
 *      Author: steiger-a
 */

#include "TxtCalibData.h"


namespace ft {


TxtCalibData::TxtCalibData(std::string filename)
	: filename(filename), valid(false)
{
	SPDLOG_LOGGER_TRACE(spdlog::get("console"), "TxtCalibData",0);
	spdlog::get("file_logger")->trace("TxtCalibData",0);
}

TxtCalibData::~TxtCalibData()
{
	SPDLOG_LOGGER_TRACE(spdlog::get("console"), "~TxtCalibData",0);
	spdlog::get("file_logger")->trace("~TxtCalibData",0);
}

bool TxtCalibData::existCalibFilename()
{
	SPDLOG_LOGGER_TRACE(spdlog::get("console"), "existCalibFilename",0);
	spdlog::get("file_logger")->trace("existCalibFilename",0);
    std::ifstream infile(filename.c_str());
    return infile.good();
}


} /* namespace ft */
